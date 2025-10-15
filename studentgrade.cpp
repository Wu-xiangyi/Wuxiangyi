#include <bits/stdc++.h>
using namespace std;
void inputScores(int *scores, int n) {
    printf("������%d��ѧ���ĳɼ�:\n", n);
    for (int i = 0; i < n; i++) 
    {
        cin>>scores[i];
    }
}

double calculateAverage(int *scores, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += scores[i];
    }
    return (double)sum / n;
}

void findMinMax(int *scores, int n, int *max, int *min) {
    *max = scores[0];
    *min = scores[0];
    for (int i = 1; i < n; i++) {
        if (scores[i] > *max) {
            *max = scores[i];
        }
        if (scores[i] < *min) {
            *min = scores[i];
        }
    }
}

void sortScores(int *scores, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (scores[i] < scores[j]) {
                swap(scores[i],scores[j]);
            }
        }
    }
}

void countGrades(int *scores, int n, int *counts) {
    for (int i = 0; i < n; i++) {
        if (scores[i] >= 90) {
            counts[0]++;
        } else if (scores[i] >= 80) {
            counts[1]++;
        } else if (scores[i] >= 70) {
            counts[2]++;
        } else if (scores[i] >= 60) {
            counts[3]++;
        } else {
            counts[4]++;
        }
    }
}

int main() {
    int numStudents;
    printf("������ѧ������: ");
    scanf("%d", &numStudents);

    int scores[numStudents];
    int gradeCounts[5] = {0};

    inputScores(scores, numStudents);

    double avg = calculateAverage(scores, numStudents);
    printf("ƽ����: %.2f\n", avg);

    int maxScore, minScore;
    findMinMax(scores, numStudents, &maxScore, &minScore);
    printf("��߷�: %d, ��ͷ�: %d\n", maxScore, minScore);

    sortScores(scores, numStudents);
    printf("�ɼ���������: ");
    for (int i = 0; i < numStudents; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    countGrades(scores, numStudents, gradeCounts);
    printf("�ȼ�ͳ��:\n");
    printf("����(90-100): %d��\n", gradeCounts[0]);
    printf("����(80-89): %d��\n", gradeCounts[1]);
    printf("�е�(70-79): %d��\n", gradeCounts[2]);
    printf("����(60-69): %d��\n", gradeCounts[3]);
    printf("������(0-59): %d��\n", gradeCounts[4]);

    return 0;
}


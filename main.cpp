#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <list>
#pragma warning(disable : 4996)

// 駅の構造体
struct Station {
    char name[30];
    struct Station* prev;
    struct Station* next;
};

// 双方向リストの構造体
struct StationList {
    struct Station* head;
    struct Station* tail;
};

// 双方向リストの初期化
void initializeList(struct StationList* list) {
    list->head = NULL;
    list->tail = NULL;
}

// リストに駅を挿入
void insertStation(struct StationList* list, const char* name) {
    struct Station* newStation = (struct Station*)malloc(sizeof(struct Station));
    if (newStation == NULL) {
        fprintf(stderr, "Memory allocation error\n");
        exit(EXIT_FAILURE);
    }

    strcpy(newStation->name, name);
    newStation->prev = NULL;
    newStation->next = NULL;

    if (list->head == NULL) {
        // リストが空の場合
        list->head = newStation;
        list->tail = newStation;
    }
    else {
        // リストに既に要素がある場合
        newStation->prev = list->tail;
        list->tail->next = newStation;
        list->tail = newStation;
    }
}

// リストの内容を表示
void displayList(struct StationList* list) {
    struct Station* current = list->head;
    while (current != NULL) {
        printf("%s\n", current->name);
        current = current->next;
    }
}

int main() {
    // 双方向リストの初期化
    struct StationList stationList;
    initializeList(&stationList);

    // 駅の挿入
    insertStation(&stationList, "Tokyo");
    insertStation(&stationList, "Ueno");
    insertStation(&stationList, "Ikebukuro");
    insertStation(&stationList, "Shinjuku");
    insertStation(&stationList, "Shibuya");
    insertStation(&stationList, "Shinagawa");
    insertStation(&stationList, "Osaki");
    insertStation(&stationList, "Gotanda");
    insertStation(&stationList, "Meguro");
    insertStation(&stationList, "Ebisu");
    insertStation(&stationList, "Shin-Okubo");

    // 西日暮里駅を挿入
    insertStation(&stationList, "Nishi-Nippori");

    // 高輪ゲートウェイ駅を挿入
    insertStation(&stationList, "Takanawa Gateway");

    // 1970年の駅一覧表示
    printf("1970年の駅一覧:\n");
    displayList(&stationList);

    // 2019年の駅一覧表示
    printf("2019年の駅一覧:\n");
    displayList(&stationList);
    // ここでは順番を変更したり駅を追加したりする必要がある

    // 2022年の駅一覧表示
    printf("2022年の駅一覧:\n");
    displayList(&stationList);
    // 同様に順番を変更したり駅を追加したりする必要がある

    return 0;
}
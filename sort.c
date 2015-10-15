#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LEN 20
#define SWAP(x, y)\
    x = (x)^(y),\
    y = (x)^(y),\
    x = (x)^(y)

void swap(int *x, int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void GetArray(int *pstr, int lenth){
    int index = 0;
    while(index < lenth){
        pstr[index] = rand()%100;
        ++index;
    }
    return ;
}

void PrintArray(int *pstr, int lenth){
    int index = 0;
    while(index < lenth){
        printf("%3d", pstr[index]);
        ++index;
    }
    printf("\n");
    return ;
}

void BubbleSort(int* pstr, int lenth){
    int lastChg = 0, change = 1;
    int head = 0, tail = lenth - 1;
    int i;
    while(change){
        for(change = 0, i = head; i < lenth-1; ++i){
            if(pstr[i] > pstr[i+1]){
                SWAP(pstr[i], pstr[i+1]);
                change = 1;
                lastChg = i;
            }
        }
        tail = lastChg;
    }
    return ;
}

void SelectSort(int* pstr, int lenth){
    int head = 0, tail = lenth - 1;
    int i;
    for(;head < tail;++head){
        for(i = head; i < tail; ++i){
            if(pstr[head] > pstr[i]){
                SWAP(pstr[head], pstr[i]);
            }
        }
    }
    return;
}

void InsertSort(int *pstr, int lenth){
    int unsort = 1;
    int tmp;
    int index;
    for(;unsort < lenth; ++unsort){
        tmp = pstr[unsort];
        for(index = unsort; index > 0 && tmp < pstr[index-1]; --index){
            pstr[index] = pstr[index - 1];
        }
        pstr[index] = tmp;
    }
    return ;
}

void ShellSort(int *pstr, int lenth){

}

void QuickSort(int *pstr, int lenth){
    int head = 0, tail = lenth - 1;
    while(head < tail){
        for(;head < tail && pstr[head] <= pstr[tail]; --tail);
        swap(pstr+head, pstr+tail);
        for(;head < tail && pstr[head] <= pstr[tail]; ++head);
        swap(pstr+head, pstr+tail);
    }
    if(head > 1)
        QuickSort(pstr, head);
    if(head < lenth - 2)
        QuickSort(pstr+head+1, lenth-head-1);
    return ;
}

void MaxHeapFixDown(int *pstr, int node, int lenth){
    int i = node, j = 2*i+1;
    for(; j < lenth; i = j, j = 2*i+1){
        if(j < lenth - 1 && pstr[j] <= pstr[j+1])
            ++j;
        if(pstr[i] >= pstr[j])
            break;
        swap(pstr+i, pstr+j);
    }
}

void StructMaxHeap(int *pstr, int lenth){
    int tail = lenth - 1;
    int j = (tail - 1)/2;
    for(; j >= 0; --j){
        MaxHeapFixDown(pstr, j, lenth);
    }
}

void MaxHeapSort(int *pstr, int lenth){
    int tail = lenth - 1;
    StructMaxHeap(pstr, lenth);
    for(;tail > 0; --tail){
        swap(pstr, pstr+tail);
        MaxHeapFixDown(pstr, 0, tail);
    }
}

void MergeArray(int *dst, int *src, int head, int mid, int tail){
    int i = head, j = mid+1;
    int index = head;
    while(i <= mid && j <= tail){
        if(src[i] > src[j])
            dst[index++] = src[j++];
        else
            dst[index++] = src[i++];
    }
    while(j <= tail)
        dst[index++] = src[j++];
    while(i <= mid)
        dst[index++] = src[i++];
}

void DevideSort(int *dst, int *src, int head, int tail){
    if (head == tail)
        return ;
    int mid = (head + tail)/2;
    DevideSort(src, dst, head, mid);
    DevideSort(src, dst, mid+1, tail);
    MergeArray(dst, src, head, mid, tail);
}

void MergeSort(int *pstr, int lenth){
    int *tmp = calloc(lenth, sizeof(int));
    memcpy(tmp, pstr, lenth*sizeof(int));
    DevideSort(pstr, tmp, 0, lenth - 1);
    free(tmp);
    return;
}

int main(int argc, char** argv){
    int myArray[LEN];
    GetArray(myArray, LEN);
    PrintArray(myArray, LEN);
//    BubbleSort(myArray, LEN);
//    SelectSort(myArray, LEN);
//    InsertSort(myArray, LEN);
//    QuickSort(myArray, LEN);
//    MaxHeapSort(myArray, LEN);
//    MergeSort(myArray, LEN);
    ShellSort(myArray, LEN);
    PrintArray(myArray, LEN);
    return 0;
}

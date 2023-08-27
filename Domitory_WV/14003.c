//
// Created by junhy on 2023-08-27.
////
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include<stdlib.h>
//
//typedef struct node
//{
//    int data;
//    struct node* left;
//    struct node* right;
//}node;
//
//node* root;
//
//int cnt =0;
//
//
//
//node* insert(node* root,int data)
//{
//    if(root == NULL)
//    {
//        root = (node*)malloc(sizeof(node));
//        root->right = root->left = NULL;
//        root->data = data;
//        cnt ++;
//
//        return root;
//    }
//    else
//    {
//        if(data < root->data){
////            root->left = insert(root->left,data);
//        }
//        else if(data>root->data){
//            root->right = insert(root->right,data);
//        }
//    }
//    return root;
//}
//
//void print(node* root)
//{
//    if(root==NULL)
//        return;
//    print(root->left);
//    printf("%d ",root->data);
//    print(root->right);
//}
//
//void preorderPrint(node* root)
//{
//    if(root==NULL)
//        return;
////    printf("%d ",root->data);
//    print(root->left);
//    print(root->right);
//}
//
//int main(){
//
//    int N = 0;
//    scanf("%d",&N);
//    for(int i=0;i<N;i++){
//        int k;
//        scanf("%d",&k);
//        root = insert(root,k);
//    }
//
//    printf("%d\n",cnt);
//    preorderPrint(root);
//
//}

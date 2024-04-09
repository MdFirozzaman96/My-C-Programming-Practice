#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int letter;
    struct Node *left;
    struct Node *right;
};
typedef struct Node node;
node *root=NULL;
void BST(char ch)
{
    node *new_node;
    new_node=(node*)malloc(sizeof(node));
    new_node->letter=ch;
    new_node->left=NULL;
    new_node->right=NULL;
    if(root==NULL)
    {
        root=new_node;
    }
    else
    {
        node *tmp;
        tmp=root;
        while(1)
        {
            if(new_node->letter>tmp->letter)
            {
                if(tmp->right==NULL)
                {
                    tmp->right=new_node;
                    break;
                }
                else
                {
                    tmp=tmp->right;
                }
            }
            else
            {
                if(tmp->left==NULL)
                {
                    tmp->left=new_node;
                    break;
                }
                else
                {
                    tmp=tmp->left;
                }
            }
        }
    }
}
void Print()
{
    node *tmp=root;
    while(tmp!=NULL)
    {
        printf("%c",tmp->letter);
        tmp=tmp->left;
    }
}
int main()
{
    char str1[26],str2[26];
    int i,x,t=3;

    while(t--)
    {while(scanf("%s",str1))
    {
        for(i=0;str1[i]!='\0';i++)
        {
            BST(str1[i]);
        }
        printf("\n\n");
        Print();
    }
    }
}

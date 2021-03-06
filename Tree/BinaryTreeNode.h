#pragma once

struct BinaryTreeNode
{
	int                    m_nValue;
	BinaryTreeNode*        m_pLeft;
	BinaryTreeNode*        m_pRight;
};

__declspec(dllexport) BinaryTreeNode* CreateBinaryTreeNode(int value);
__declspec(dllexport) void ConnectTreeNodes(BinaryTreeNode* pParent, BinaryTreeNode* pLeft, BinaryTreeNode* pRight);
__declspec(dllexport) void PrintTreeNode(const BinaryTreeNode* pNode);
__declspec(dllexport) void PrintTree(const BinaryTreeNode* pRoot);
__declspec(dllexport) void DestroyTree(BinaryTreeNode* pRoot);
__declspec(dllexport) void printFromTopToBottom(BinaryTreeNode* pTreeNode);
__declspec(dllexport) void printFromTopToBottomByLevel(BinaryTreeNode* pTreeNode);
__declspec(dllexport) void printFromTopToBootomZigzag(BinaryTreeNode* pTreeNode);
//判断一个序列是不是BST（二叉搜索树）的后序遍历
__declspec(dllexport) bool isSequenceOfBST(int sequence[],int length);
//通过前序遍历序列恢复二叉搜索树
__declspec(dllexport) BinaryTreeNode* createBSTByPreOrder(int sequence[],int length);

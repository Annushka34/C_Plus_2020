//#include<iostream>
//using namespace std;
//
//class Tree
//{
//	struct Node
//	{
//		int val;
//		int key;
//
//		Node* left;
//		Node* right;
//	};
//
//	Node* root;
//	
//public:
//	Tree()
//	{
//		root = nullptr;
//	}
//	void AddToTree(int key, int val)
//	{
//		Node* newNode = new Node();
//		newNode->key = key;
//		newNode->val = val;
//		newNode->left = nullptr;
//		newNode->right = nullptr;
//
//		if(root == nullptr)
//		{
//			root = newNode;
//			return;
//		}
//		Node* cur = root;
//		while(cur != nullptr)
//		{
//			if(key > cur->key)
//			{
//				if(cur->right == nullptr)
//				{
//					cur->right = newNode;
//					return;
//				}
//				cur = cur->right;
//			}
//			else if (key < cur->key)
//			{
//				if (cur->left == nullptr)
//				{
//					cur->left = newNode;
//					return;
//				}
//				cur = cur->left;
//			}
//			else if(key == cur->key)
//			{
//				cur->val = val;
//				delete newNode;
//				return;
//			}
//		}
//	}
//
//	void AddToTreeRecurs(int key, int val)
//	{
//		AddToTree(root, key, val);
//	}
//	void Show()
//	{
//		ShowTree(root);
//	}
//
//private:
//	void ShowTree(Node * root)
//	{
//		if (root == nullptr) return;
//		ShowTree(root->left);
//		cout << "key: " << root->key << " val: " << root->val << endl;
//		ShowTree(root->right);
//	}
//
//	void AddToTree(Node*& root, int key, int val)
//	{
//		if (root == nullptr)
//		{
//			Node* newNode = new Node();
//			newNode->key = key;
//			newNode->val = val;
//			newNode->left = nullptr;
//			newNode->right = nullptr;
//			root = newNode;
//			return;
//		}
//		else if(key > root->key)
//			AddToTree(root->right, key, val);
//		else if (key < root->key)
//			AddToTree(root->left, key, val);
//		else if(key == root->key)
//		{
//			root->val = val;
//			return;
//		}
//
//	}
//};
//
//void main()
//{
//	Tree tree;
//	tree.AddToTreeRecurs(5, 112456);
//	tree.AddToTreeRecurs(75, 335893);
//	tree.AddToTreeRecurs(3, 123456);
//	tree.AddToTreeRecurs(18, 654789);
//	tree.Show();
//}

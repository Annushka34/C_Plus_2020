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
//	void AddToTreeRecurs(int key, int val)
//	{
//		AddToTree(root, key, val);
//	}
//	void Del(int key)
//	{
//		Del(root, key);
//	}
//
//	int SearchByKey(int key)
//	{
//		return SearchByKey(root, key);
//	}
//	int SearchByVal(int val)
//	{
//		Node* find = SearchByVal(root, val);
//		return find->key;
//	}
//	
//	void Show()
//	{
//		ShowTree(root);
//	}
//
//private:
//	Node*& SearchByVal(Node *& root, int val)
//	{
//		if (root == nullptr) return root;
//		if (root->val == val) return root;
//		Node * find = SearchByVal(root->left, val);
//		if (find != nullptr) return find;
//		find = SearchByVal(root->right, val);
//		if (find != nullptr) return find;
//	}
//	int SearchByKey(Node* root, int key)
//	{
//		if (root == nullptr)
//		{
//			cout << "Are you crazy& No such node!!!!!!!!!!!\n";
//			return NULL;
//		}
//		if (root->key == key)
//		{
//			cout << "OOOO, I find you!!!!!\n You are: " << root->val << endl;
//			return root->val;
//		}
//		else if(key > root->key)
//		{
//			SearchByKey(root->right, key);
//		}
//		else if (key < root->key)
//		{
//			SearchByKey(root->left, key);
//		}
//	}
//	void ShowTree(Node* root)
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
//		else if (key > root->key)
//			AddToTree(root->right, key, val);
//		else if (key < root->key)
//			AddToTree(root->left, key, val);
//		else if (key == root->key)
//		{
//			root->val = val;
//			return;
//		}
//
//	}
//
//	void Del(Node*& root, int key)
//	{
//		if (root == nullptr) return;
//		
//		if(key < root->key) Del(root->left, key);
//		else if (key > root->key) Del(root->right, key);
//		else if (root->key == key)
//		{
//			//----FIRST - no child
//			if (root->left == nullptr && root->right == nullptr)
//			{
//				delete root;
//				root = nullptr;
//				return;
//			}
//			//----SECOND - one child
//			else if (root->left == nullptr)
//			{
//				Node* del = root;
//				root = root->right;
//				delete del;
//			}
//			else if (root->right == nullptr)
//			{
//				Node* del = root;
//				root = root->left;
//				delete del;
//			}
//			//----THIRD - two children
//			else
//			{
//				Node* min = FindMin(root->right);
//				root->key = min->key;
//				root->val = min->val;
//				Del(root->right, min->key);
//				return;
//			}
//		}
//		
//	}
//
//	Node *& FindMin(Node *& root)
//	{
//		if (root == nullptr) return root;
//		if(root->left == nullptr)
//			return root;
//		FindMin(root->left);
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
//	cout << "---------------------\n";
//
//	cout << "Del 75 & 5\n";
//	tree.Del(5);
//	tree.Del(75);
//	tree.Show();
//	cout << "---------------------\n";
//	cout << "Add 3 & 55\n";
//	tree.AddToTreeRecurs(3, 555555);
//	tree.AddToTreeRecurs(55, 1111);
//	tree.Show();
//
//	cout << "SEARCH 3\n";
//	int val = tree.SearchByKey(3);
//	cout << val << endl;
//
//	cout << "SEARCH BY VAL 654789: \n";
//	int key = tree.SearchByVal(654789);
//	cout << key << endl;
//}

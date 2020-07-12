//#include<iostream>
//#include<string>
//using namespace std;
//
//class Tree
//{
//	struct Node
//	{
//		string val;
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
//	void AddToTreeRecurs(int key, string val)
//	{
//		AddToTree(root, key, val);
//	}
//	void Del(int key)
//	{
//		Del(root, key);
//	}
//	string SearchByKey(int key)
//	{
//		return SearchByKey(root, key);
//	}
//	int SearchByVal(string val)
//	{
//		Node* find = SearchByVal(root, val);
//		if (find != nullptr)
//			return find->key;
//		else return NULL;
//	}
//
//	void Show()
//	{
//		ShowTree(root);
//	}
//
//private:
//	Node*& SearchByVal(Node*& root, string val)
//	{
//		Node * result = nullptr;
//		if (root->left != nullptr) result = SearchByVal(root->left, val);
//		if (root->val == val) return root;
//		if (result == nullptr && root->right != nullptr) result = SearchByVal(root->right, val);
//
//		return result;
//	}
//	string SearchByKey(Node* root, int key)
//	{
//		if (root == nullptr)
//		{
//			cout << "Are you crazy& No such node!!!!!!!!!!!\n";
//			return "";
//		}		
//		else if (key > root->key)
//		{
//			return SearchByKey(root->right, key);
//		}
//		else if (key < root->key)
//		{
//			return SearchByKey(root->left, key);
//		}
//		else if (root->key == key)
//		{
//			cout << "OOOO, I find you!!!!!\n You are: " << root->val << endl;
//			return root->val;
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
//	void AddToTree(Node*& root, int key, string val)
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
//		if (key < root->key) Del(root->left, key);
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
//	Node*& FindMin(Node*& root)
//	{
//		if (root == nullptr) return root;
//		if (root->left == nullptr)
//			return root;
//		FindMin(root->left);
//	}
//};
//
//void main()
//{
//	Tree tree;
//	tree.AddToTreeRecurs(5, "Ivanov");
//	tree.AddToTreeRecurs(75, "Sidorov");
//	tree.AddToTreeRecurs(3, "Zvetkov");
//	tree.AddToTreeRecurs(18, "Pupkin");
//	tree.Show();
//	cout << "---------------------\n";
//
//	cout << "Del 75 & 5\n";
//	tree.Del(5);
//	tree.Del(75);
//	tree.Show();
//	cout << "---------------------\n";
//	cout << "Add 3 & 55\n";
//	tree.AddToTreeRecurs(11, "Petrov");
//	tree.AddToTreeRecurs(55, "Bashmakov");
//	tree.Show();
//
//	cout << "SEARCH 3\n";
//	string val = tree.SearchByKey(55);
//	cout << val << endl;
//
//	cout << "SEARCH BY VAL Petrov: \n";
//	int key = tree.SearchByVal("Ivanov");
//	if(key != NULL)
//	cout << key << endl;
//}

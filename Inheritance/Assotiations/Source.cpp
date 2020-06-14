#include"Header.h"
#include"Building.h"


void main()
{
	Building b(3);//   create building with 3 rooms array (composition)

	Owner* ivanov = new Owner("Ivanov", "Conservative", 10000);
	b.SetOwner(ivanov);//  set owner object in builing (agregation)
	b.ShowOwner();

	Furniture* boocase = new Furniture();
	boocase->name = "boocase";
	Furniture* sofa = new Furniture();
	sofa->name = "sofa";
	sofa->price = 7000;
	Furniture* wardrobe = new Furniture();
	wardrobe->name = "wardrobe";
	//---owner bought furniture
	b.BuyFurniture(boocase);
	b.BuyFurniture(sofa);
	b.BuyFurniture(wardrobe);


	Owner* owner1 = new Owner("Ptrow", "Hi-Tech", 20000);
	b.SetOwner(owner1);
	b.ShowOwner();
	//---owner bought furniture
	b.BuyFurniture(boocase);
	b.BuyFurniture(sofa);
	b.BuyFurniture(wardrobe);


	Building b1(5);
	b1.SetOwner(ivanov);

	delete ivanov;
	delete owner1;
}
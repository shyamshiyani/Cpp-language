#include<iostream>
using namespace std;

class companies{
	private :
		int id,staff,revenue,import,axport;
		string name,ceo;
		
	public :
		companies(int id,string name,int staff,int revenue,int import,int axport,string ceo)
		{
			this->id=id;
			this->name=name;
			this->staff=staff;
			this->revenue=revenue;
			this->import=import;
			this->axport=axport;
			this->ceo=ceo;
		}
		
		getdata()
		{
			cout<<endl<<"- comp_id:"<<this->id<<endl;
			cout<<"- comp_name:"<<this->name<<endl;
			cout<<"- comp_staff_quantity:"<<this->staff<<endl;
			cout<<"- comp_revenue (per year):"<<this->revenue<<endl;
			cout<<"- comp_import_raw_diamonds (no. of raw diamonds imported per year):"<<this->import<<endl;
			cout<<"- comp_export_diamonds (no. of diamonds per year):"<<this->axport<<endl;
			cout<<"- comp_ceo (name of CEO of the company):"<<this->ceo<<endl;
		}
};
int main()
{
	companies c1(878,"daimond_lal",500,500000,5000,4989,"ramesh_babu"),
	c2(791,"sanju_brother",100,30000,1000,999,"kanu_bhai"),
	c3(251,"ram_lal_sons",50,8000,500,500,"ram_lal"),
	c4(741,"s_v_dimond",1000,1500000,10000,10000,"savji_bhai"),
	c5(112,"nilam_and_co!",20,5000,100,100,"nilu_bhai");
	
	c1.getdata();
	c2.getdata();
	c3.getdata();
	c4.getdata();
	c5.getdata();
	 
	return 0;
}

#include<string>

using namespace std;



class Professor: public Pessoa
{

		private:
			
			float sal;
			int siape;
		
		public:
			
			Professor(float, int, string, string);
			
			float getSal();
			int getSi();
			
			void setSal(float);
			void setSi(int);
};

			
			


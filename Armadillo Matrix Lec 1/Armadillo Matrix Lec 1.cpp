// Armadillo Matrix Lec 1.cpp : Defines the entry point for the application.
//

#include "Armadillo Matrix Lec 1.h"


int main()
{
	std::cout << "Hello Armadillo." << std::endl;
	arma::mat A(5, 5, arma::fill::randu); // typedef  , mat mean double  fmat mean float
	arma::mat b = arma::mean(A);
	arma::mat c = arma::median(A);
	arma::Mat<int> doub(3,3,arma::fill::randn);
	std::cout << "Call constructor\t: [\n " << doub <<"]\n"; 
	arma::Mat<double> otherConstructor (arma::size(doub), arma::fill::randu) ;
	std::cout << "call constructor\t: [\n " << otherConstructor << "]\n";
	std::vector<int> testAssign = { 1,2,3,4,5,6 };
	arma::Mat<int> nameAss(testAssign); // treated to column vector
	std::cout << "Assign vector to arma\t: [ \n " << nameAss << "]" << std::endl;;
	std::cout << "RESULT \t: [" << A << "]" << std::endl;
	std::cout << "mean result \t: [" << b << "]" << std::endl;
	std::cout << "media result \t: [" << c << "]" << std::endl;

	std::cout << "explicitly initialized element " << std::endl;
	arma::Mat<int>armaIntZero(3, 3, arma::fill::zeros);
	arma::Mat<int>armaIntOne(3, 3, arma::fill::ones);
	arma::Mat<int>oneMainDiag(3, 3, arma::fill::eye);
	arma::Mat<int>notInitialize(3, 3, arma::fill::none);
	arma::Mat<double>randVal(3, 3, arma::fill::randu);
	
	//testing
	std::cout << "set zero \t: [\n" << armaIntZero << "]" << std::endl;
	std::cout << "set one \t: [\n" << armaIntOne << "]" << std::endl;
	std::cout << "set diag \t: [\n" << oneMainDiag << "]" << std::endl;
	std::cout << "set none \t: [\n" << notInitialize << "]" << std::endl;
	std::cout << "set rand \t: [\n" << randVal << "]" << std::endl;
	//indexing test 
	std::cout << "change the current matrix " << std::endl;
	armaIntOne(0, 0) = 12;
	armaIntOne(0, 1) = 43;
	armaIntOne(0, 2) = 13;
	std::cout << "set one \t: [\n" << armaIntOne << "]" << std::endl;
	//fixed size 
	arma::Mat<int>::fixed<3, 4> fixedSize;
	arma::Mat<int>::fixed<4, 3> SfixedSize;

	for (auto i = 0; i !=3; ++i)
	{
		for (auto j = 0; j != 4; ++j) {
			fixedSize(i, j) = 8 + i * j;
		}
	}
	std::cout << "Show fixed size element a" << std::endl;
	std::cout << fixedSize << std::endl;

	for (auto i = 0; i != 4; ++i)
	{
		for (auto j = 0; j != 3; ++j) {
			SfixedSize(i, j) = 8 + i * j;
		}
	}
	std::cout << "Show fixed size element  b" << std::endl;
	std::cout << SfixedSize << std::endl;

	//multiplication 
	std::cout << "Multiply a*b , result \t:" << std::endl;
	std::cout << fixedSize * SfixedSize << std::endl;
	std::cout << "addition a+b , result \t:" << std::endl;
	
	std::cout <<"adding it's self " <<std::endl<< fixedSize + fixedSize << std::endl;




	return 0;
}

#include <math.h>
#include <iostream>
using namespace std;

#include "../integral_lib/is.h"
#include "../integral_lib/f.h"
#include "../integral_lib/trap.h"
#include "../integral_lib/cr.h"
#include "boost/program_options.hpp"

namespace po = boost::program_options;

int main(int argc, char** argv)
{
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help", "This program count integral on section from a to b")
        ("a", po::value<int>()->default_value(0), "Start integration")
        ("b", po::value<int>()->default_value(1), "End integration")
        ;

    po::variables_map vm;
    po::store(po::parse_command_line(argc, argv, desc), vm);
    po::notify(vm);
    
    if (vm.count("help")) {
        std::cout << desc << "\n";
        return 1;
    }

    double a = vm["a"].as<int>();
    double b = vm["b"].as<int>();

	int i; // счётчик
	double Integral; // здесь будет интеграл
	//double a = 0.0, b = 1.0; // задаём отрезок интегрирования
	double h = 0.1;// задаём шаг интегрирования

	double n; // задаём число разбиений n

	n = (b - a) / h;

	cout << "Central rectangles = " << cr(a, h, n) << "\n";
	cout << "Trapezoid = " << trap(a, b, h, n) << "\n";
	cout << "Integral simpsona = " << integral_simpsona(a, b, h, n) << "\n";

	system("pause");
}
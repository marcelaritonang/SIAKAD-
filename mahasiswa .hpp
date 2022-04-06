Skip to content
Search or jump to…
Pull requests
Issues
Marketplace
Explore
 
@marcelaritonang 
rezafuad
/
prolan-sim
Public
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
prolan-sim/include/mahasiswa.hpp
@rezafuad
rezafuad first commit
Latest commit 09aa7ec 13 days ago
 History
 1 contributor
35 lines (26 sloc)  661 Bytes
   
#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;

public:
	mahasiswa(std::string id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif
© 2022 GitHub, Inc.
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
Loading complete

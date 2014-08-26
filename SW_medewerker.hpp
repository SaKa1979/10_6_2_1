/*
 * SW_medewerker.hpp
 *
 *  Created on: 24 Aug 2014
 *      Author: sander
 */
#define NAAMLEN 20

class medewerker{
	private:
		char naam[NAAMLEN];
		double bruto_salaris;
//		double netto_salaris;
//		double vakantietoeslag;

	private:


	public:
		void lees_medewerker();
//		void lees_vakantietoeslag(double *vakantietoeslag);
		void schrijf_medewerker(char *naam, double *bruto_salaris);
//		double bereken_netto_salaris();

};

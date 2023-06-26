//DO NOT EDIT//////////////////////////////
class Satellite : public CelestialBody { //
///////////////////////////////////////////
  public: 
    Satellite(double s, double m, string c, string n, string hp) : CelestialBody(s, m, c, n) {
      host_planet = hp;
    }

    string GetHostPlanet() {
      return host_planet;
    }

    void SetHostPlanet(string new_host_planet) {
      host_planet = new_host_planet;
    }
  
  private: 
    string host_planet;
};

//DO NOT EDIT///////////////////////////
class Planet : public CelestialBody { //
////////////////////////////////////////
  public: 
    Planet(double s, double m, string c, string n, string hs) : CelestialBody(s, m, c, n) {
      host_star = hs;
    }

    string GetHostStar() {
      return host_star;
    }

    void SetHostStar(string new_host_star) {
      host_star = new_host_star;
    }
  
  private: 
    string host_star;
};
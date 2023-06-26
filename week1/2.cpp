class Watch {
  public:
    Watch(string mf, string mo, int d, int w, string mt) {
      manufacturer = mf;
      model = mo;
      diameter = d;
      water_resistance = w;
      material = mt;
    }
  
    string GetManufacturer() {
      return manufacturer;
    }

    void SetManufacturer(string new_manufacturer) {
      manufacturer = new_manufacturer;
    }

    string GetModel() {
      return model;
    }

    void SetModel(string new_model) {
      model = new_model;
    }

    int GetDiameter() {
      return diameter;
    }

    void SetDiameter(int new_diameter) {
      diameter = new_diameter;
    }

    int GetWaterResistance() {
      return water_resistance;
    }

    void SetWaterResistance(int new_water_resistance) {
      water_resistance = new_water_resistance;
    }

    string GetMaterial() {
      return material;
    }

    void SetMaterial(string new_material) {
      material = new_material;
    }

    void Summary() {
      cout << "Manufacturer: " << manufacturer << endl;
      cout << "Model: " << model << endl;
      cout << "Diameter: " << diameter << " mm" << endl;
      cout << "Water Resistance: " << water_resistance << " m" << endl;
      cout << "Material: " << material << endl;
    }
  
  private:
    string manufacturer;
    string model;
    int diameter;
    int water_resistance;
    string material;
};
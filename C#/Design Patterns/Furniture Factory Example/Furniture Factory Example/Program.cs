namespace Furniture_Factory_Example;


interface IChair {
    void hasLegs();
    void sitOn();
}

interface ISofa {
    void hasLegs();
    void sitOn();
}


interface ICofeeTable {
    void hasLegs();
    void sitOn();
}

interface IFurniteFactory {
    IChair createChair();
    ICofeeTable createCofeeTable();
    ISofa createSofa();
}

class ArtDecoChair : IChair {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class VictorianChair : IChair {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class ModernChair : IChair {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class ArtDecoSofa : ISofa {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class VictorianSofa : ISofa {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class ModernSofa : ISofa {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class ArtDecoCofeeTable : ICofeeTable {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class VictorianCofeeTable : ICofeeTable {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class ModernCofeeTable : ICofeeTable {
    public void hasLegs() {

    }

    public void sitOn() {

    }
}

class VictorianFurnitureFactory : IFurniteFactory {
    public IChair createChair() {
        return new VictorianChair();
    }

    public ICofeeTable createCofeeTable() {
        return new VictorianCofeeTable();
    }

    public ISofa createSofa() {
        return new VictorianSofa();
    }
}

class ModernFurnitureFactory : IFurniteFactory {
    public IChair createChair() {
        return new ModernChair();
    }

    public ICofeeTable createCofeeTable() {
        return new ModernCofeeTable();
    }

    public ISofa createSofa() {
        return new ModernSofa();
    }
}

class ArtDecoFurnitureFactory : IFurniteFactory {
    public IChair createChair() {
        return new ArtDecoChair();
    }

    public ICofeeTable createCofeeTable() {
        return new ArtDecoCofeeTable();
    }

    public ISofa createSofa() {
        return new ArtDecoSofa();
    }
}

internal class Program {
    static void Main(string[] args) {

    }
}
/* Рабочий пример паттерна "Singleton" */
class Singleton
{
  public:
	static Singleton& Instance()
	{
		// согласно стандарту, этот код ленивый и потокобезопасный
		static Singleton s;
		return s;
	}

  private:
	Singleton() {}  // конструктор недоступен
//	~Singleton() {} // и деструктор

	// необходимо также запретить копирование
	Singleton(Singleton const&); // реализация не нужна
	Singleton& operator= (Singleton const&);  // и тут
};

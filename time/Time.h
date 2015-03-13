class Time {                                                      //(D)
	private:
		int hour;
		int minute;
		int second;

	public: 
		Time();
		~Time();
		Time(int a, int b, int c);
		int gethours();
		void sethours(int h);
		void setTime( int a, int b, int c);
		void print();
};
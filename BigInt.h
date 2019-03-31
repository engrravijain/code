class BigInt {
    std::vector <int> number;
    public:
        /**
         * 
         */
        /* constructors */
        BigInt();
        BigInt(const char* c);
        BigInt(const std::string& s);
        BigInt(int l);
        BigInt(long l);
        BigInt(long long l);
        BigInt(unsigned int l);
        BigInt(unsigned long l);
        BigInt(unsigned long long l);
        BigInt(const BigInt& l);

        /* assignment operators */
        const BigInt& operator=(const char* c);
        const BigInt& operator=(const std::string& s);
        const BigInt& operator=(int l);
        const BigInt& operator=(long l);
        const BigInt& operator=(long long l);
        const BigInt& operator=(unsigned int l);
        const BigInt& operator=(unsigned long l);
        const BigInt& operator=(unsigned long long l);
        const BigInt& operator=(const BigInt& l);

        /* unary increment/decrement operators */
        const BigInt& operator++();
        const BigInt& operator--();
        BigInt operator++(int);
        BigInt operator--(int);

        /* operational assignments */
        const BigInt& operator+=(const BigInt& rhs);
        const BigInt& operator-=(const BigInt& rhs);
        const BigInt& operator*=(const BigInt& rhs);
        const BigInt& operator/=(const BigInt& rhs); // throw
        const BigInt& operator%=(const BigInt& rhs); // throw

        /* operations */
        BigInt operator-() const;
        BigInt operator+(const BigInt& rhs) const;
        BigInt operator-(const BigInt& rhs) const;
        BigInt operator*(const BigInt& rhs) const;
        BigInt operator/(const BigInt& rhs) const; // throw
        BigInt operator%(const BigInt& rhs) const; // throw

        /* relational operations */
        bool operator==(const BigInt& rhs) const;
        bool operator!=(const BigInt& rhs) const;
        bool operator<(const BigInt& rhs) const;
        bool operator<=(const BigInt& rhs) const;
        bool operator>(const BigInt& rhs) const;
        bool operator>=(const BigInt& rhs) const;

        /* integer square root */
        BigInt intSqrt() const; // throw

        /* digit operations */
        char digitAt(size_t i) const; // throw
        size_t numberOfDigits() const;

        /* size in bytes */
        size_t size() const;

        /* string conversion */
        std::string toString() const;

        /* conversion to primitive types */
        int toInt() const; // throw
        long toLong() const; // throw
        long long toLongLong() const; // throw
        unsigned int toUnsignedInt() const; // throw
        unsigned long toUnsignedLong() const; // throw
        unsigned long long toUnsignedLongLong() const; // throw

    private:
        static ELEM_TYPE dInR(const BigInt& R, const BigInt& D);
        static void multiplyByDigit(ELEM_TYPE factor, std::vector<ELEM_TYPE>& val);

        void correct(bool justCheckLeadingZeros = false, bool hasValidSign = false);
        void fromString(const std::string& s);
        void optimizeSqrtSearchBounds(BigInt& lo, BigInt& hi) const;
        void truncateToBase();
        bool equalizeSigns();
        void removeLeadingZeros();

        std::vector<ELEM_TYPE> val; // number with base FACTOR
        bool pos; // true if number is positive
};
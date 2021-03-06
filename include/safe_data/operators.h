/*
Copyright Mike Naquin, 2006. All rights reserved.

File:
	safe_data/operators.h

Created: 2006.05.14

Description:
	Binary operator overloads for safe<>.
*/

#ifndef SAFE_DATA_OPERATORS_MPN_14MAY2006_HPP
#define SAFE_DATA_OPERATORS_MPN_14MAY2006_HPP

#include "safe_data/safe_fwd.h"
#include "safe_data/safe_detail.h"

namespace safe_data {

//
// Arithmetic operators
// 

// operator +
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator+ (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() + rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator+ (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() + rhs); }

template <class T, class V, class I, class Y>
inline Y           operator+ (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs + rhs.data(); }


// operator -
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator- (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() - rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator- (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() - rhs); }

template <class T, class V, class I, class Y>
inline Y           operator- (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs - rhs.data(); }


// operator *
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator* (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() * rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator* (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() * rhs); }

template <class T, class V, class I, class Y>
inline Y           operator* (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs * rhs.data(); }


// operator /
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator/ (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() / rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator/ (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() / rhs); }

template <class T, class V, class I, class Y>
inline Y           operator/ (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs / rhs.data(); }

// operator %
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator% (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() % rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator% (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() % rhs); }

template <class T, class V, class I, class Y>
inline Y           operator% (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs % rhs.data(); }


//
// Logical operators
//
    
// operator &&
template <class T, class V, class I, class T2, class V2, class I2>
inline bool operator&& (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return lhs.data() && rhs.data(); }

template <class T, class V, class I, class Y>
inline bool operator&& (safe<T,V,I> const& lhs, Y const& rhs)
{ return lhs.data() && rhs; }

template <class T, class V, class I, class Y>
inline bool operator&& (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs        && rhs.data(); }


// operator ||
template <class T, class V, class I, class T2, class V2, class I2>
inline bool operator|| (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return lhs.data() || rhs.data(); }

template <class T, class V, class I, class Y>
inline bool operator|| (safe<T,V,I> const& lhs, Y const& rhs)
{ return lhs.data() || rhs; }

template <class T, class V, class I, class Y>
inline bool operator|| (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs        || rhs.data(); }

//
// Bitwise operators
//

// operator &
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator& (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() & rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator& (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() & rhs); }

template <class T, class V, class I, class Y>
inline Y           operator& (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs & rhs.data(); }

// operator |
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator| (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() | rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator| (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() | rhs); }

template <class T, class V, class I, class Y>
inline Y           operator| (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs | rhs.data(); }


// operator ^
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator^ (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() ^ rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator^ (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() ^ rhs); }

template <class T, class V, class I, class Y>
inline Y           operator^ (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs ^ rhs.data(); }


// operator <<
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator<< (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() << rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator<< (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() << rhs); }

template <class T, class V, class I, class Y>
inline Y           operator<< (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs << rhs.data(); }

// operator >>
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I> operator>> (safe<T,V,I> const& lhs, safe<T2,V2,I2> const& rhs)
{ return safe<T,V,I>(lhs.data() >> rhs.data()); }

template <class T, class V, class I, class Y>
inline safe<T,V,I> operator>> (safe<T,V,I> const& lhs, Y const& rhs)
{ return safe<T,V,I>(lhs.data() >> rhs); }

template <class T, class V, class I, class Y>
inline Y           operator>> (Y const& lhs, safe<T,V,I> const& rhs)
{ return lhs >> rhs.data(); }


//
// Compound assignment operators
//
    
// operator +=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator+= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data += rhs.data();
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator+= (safe<T,V,I>& lhs, Y const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data += rhs;
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator+= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs += rhs.data(); return lhs; }


// operator -=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator-= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data -= rhs.data();
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator-= (safe<T,V,I>& lhs, Y const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data -= rhs;
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator-= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs -= rhs.data(); return lhs; }


// operator *=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator*= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data *= rhs.data();
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator*= (safe<T,V,I>& lhs, Y const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data *= rhs;
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator*= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs *= rhs.data(); return lhs; }


// operator /=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator/= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data /= rhs.data();
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator/= (safe<T,V,I>& lhs, Y const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data /= rhs;
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator/= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs /= rhs.data(); return lhs; }


// operator %=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator%= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data %= rhs.data();
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator%= (safe<T,V,I>& lhs, Y const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data %= rhs;
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator%= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs %= rhs.data(); return lhs; }


// operator &=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator&= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data &= rhs.data();
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator&= (safe<T,V,I>& lhs, Y const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data &= rhs;
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator&= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs &= rhs.data(); return lhs; }


	
// operator |=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator|= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data |= rhs.data();
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator|= (safe<T,V,I>& lhs, Y const& rhs)
{
	typedef typename safe_detail::types<T>::raw_type raw_type;
	raw_type data(lhs.data());
	data |= rhs;
	lhs = data;
	return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator|= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs |= rhs.data(); return lhs; }


    
// operator ^=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator^= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
    typedef typename safe_detail::types<T>::raw_type raw_type;
    raw_type data(lhs.data());
    data ^= rhs.data();
    lhs = data;
    return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator^= (safe<T,V,I>& lhs, Y const& rhs)
{
    typedef typename safe_detail::types<T>::raw_type raw_type;
    raw_type data(lhs.data());
    data ^= rhs;
    lhs = data;
    return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator^= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs ^= rhs.data(); return lhs; }

    

// operator <<=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator<<= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
    typedef typename safe_detail::types<T>::raw_type raw_type;
    raw_type data(lhs.data());
    data <<= rhs.data();
    lhs = data;
    return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator<<= (safe<T,V,I>& lhs, Y const& rhs)
{
    typedef typename safe_detail::types<T>::raw_type raw_type;
    raw_type data(lhs.data());
    data <<= rhs;
    lhs = data;
    return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator<<= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs <<= rhs.data(); return lhs; }

    
// operator >>=
template <class T, class V, class I, class T2, class V2, class I2>
inline safe<T,V,I>& operator>>= (safe<T,V,I>& lhs, safe<T2,V2,I2> const& rhs)
{
    typedef typename safe_detail::types<T>::raw_type raw_type;
    raw_type data(lhs.data());
    data >>= rhs.data();
    lhs = data;
    return lhs;
}

template <class T, class V, class I, class Y>
inline safe<T,V,I>& operator>>= (safe<T,V,I>& lhs, Y const& rhs)
{
    typedef typename safe_detail::types<T>::raw_type raw_type;
    raw_type data(lhs.data());
    data >>= rhs;
    lhs = data;
    return lhs;
}

template <class T, class V, class I, class Y>
inline Y&           operator>>= (Y& lhs, safe<T,V,I> const& rhs)
{ lhs >>= rhs.data(); return lhs; }



} // namespace safe_data

#endif

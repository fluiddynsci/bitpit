//
// Written by Andrea Iob <andrea_iob@hotmail.com>
//
#ifndef __PATCHMAN_NODE_HPP__
#define __PATCHMAN_NODE_HPP__

/*! \file */

#include <memory>

namespace pman {

class Node {

public:
	enum Coordinate {
		COORD_X =0,
		COORD_Y,
		COORD_Z,
	};

	Node();
	Node(const long &id);

	void set_id(const long &id);
	long get_id() const;

	void set_coords(std::array<double, 3> &coords);
	const std::array<double, 3> & get_coords() const;
	
protected:
	static const long NULL_NODE_ID;

private:
	long m_id;
	std::array<double, 3> m_coords;

};

}

#endif

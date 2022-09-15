// Pakeeza Rashid
// Few comments describing the class Points2D

#ifndef CSCI335_HOMEWORK1_POINTS2D_H_
#define CSCI335_HOMEWORK1_POINTS2D_H_

#include <array>
#include <iostream>
#include <cstddef>
#include <string>
#include <sstream>

namespace teaching_project {

// Place comments that provide a brief explanation of the class,
// and its sample usage.
template<typename Object>
class Points2D {
  public:
    // Default "big five" -- you have to alter them for your assignment.
    // That means that you will remove the "= default" statement.
    //  and you will provide an implementation.

    
    Points2D() {
        size_=0;
        sequence_=new std::array<Object,2>[size_];
        }
//Zero-parameter constructor -> change from default to have a body
// Set size to 0.

    // Copy-constructor.
    Points2D(const Points2D &rhs){
        size_=rhs.size_;
        sequence_=new std::array<Object,2>[size_];
        for(size_t i = 0; i < size_; i++){
            for(size_t j = 0; j < 2; j++){
                sequence_[i][j] = rhs.sequence_[i][j]; 
            }
        }

    }

    // Copy-assignment. If you have already written
    // the copy-constructor and the move-constructor
    // you can just use:
    // {
    // Points2D copy = rhs;
    // std::swap(*this, copy);
    // return *this;
    // }

    //Copy Assignment Operator
    Points2D& operator=(const Points2D &rhs){
        {
     Points2D copy = rhs;
     std::swap(*this, copy);
     return *this;
    
    }

    // Move-constructor.
    Points2D(Points2D &&rhs) : sequence_{rhs.sequence_}{
        rhs.size_=0;
        rhs.sequence_=nullptr;
    }

    // Move-assignment.
    // Just use std::swap() for all variables.
    Points2D& operator=(Points2D &&rhs) {
        std::swap (sequence_,rhs.sequence_;)
        return *this;

        //do we have to use the std::swap for size_ as well?
    }
  
    //Destructor
    ~Points2D() {
        size_=0;
        delete sequence_;
    }

    // End of big-five.


    // One parameter constructor.
    Points2D(const std::array<Object, 2>& item) {
        // Provide code.
        // what do we have to do here?

    }

    size_t size() const {
        // Code missing.ss
        //do we have to put return sequence_.size();
        //what do we have to do here?
    }

    // @location: an index to a location in the sequence.
    // @returns the point at @location.
    // const version.
    // abort() if out-of-range.
    const std::array<Object, 2>& operator[](size_t location) const {
        // Code missing.


    }

    //  @c1: A sequence.
    //  @c2: A second sequence.
    //  @return their sum. If the sequences are not of the same size, append the
    //    result with the remaining part of the larger sequence.
    friend Points2D operator+(const Points2D &c1, const Points2D &c2) {
        // Code missing.
    }

    // Overloading the << operator.
    friend std::ostream &operator<<(std::ostream &out, const Points2D &some_points) {
        // Code missing.
    }



    // Overloading the >> operator.
    // Read a chain from an input stream (e.g., standard input).
    friend std::istream &operator>>(std::istream &in, Points2D &some_points) {
        // Code missing.
    }



  private:
    // Sequence of points.
    std::array<Object, 2> *sequence_;
    // Size of sequence.
    size_t size_;
};

}  // namespace teaching_project
#endif // CSCI_335_HOMEWORK1_Points2D_H_
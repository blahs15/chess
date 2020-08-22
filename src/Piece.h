class Piece {
private:

    Color m_color;
    Position m_position;
    bool m_hasMoved;

public:
    void setMoved();
    Piece promote();
    

};
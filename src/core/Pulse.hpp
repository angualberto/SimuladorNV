#ifndef PULSE_HPP
#define PULSE_HPP

class Pulse {
public:
    enum class Type {
        PI,
        PI_OVER_2,
        CUSTOM
    };

    Pulse(Type type, double duration);
    void apply();
    double getDuration() const;
    Type getType() const;

private:
    Type pulseType;
    double pulseDuration;
};

#endif // PULSE_HPP
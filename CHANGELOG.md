# Changelog

All notable changes to the Universal IR Remote project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [1.0.0] - 2021-05-26

### Added
- Initial release of Universal IR Remote Control
- IR learning functionality for capturing remote control signals
- IR transmission capability for controlling devices
- 8 programmable buttons for storing IR codes
- Mode switching between learn and transmit modes
- Visual feedback with status LED
- Serial monitor debugging output
- Sony IR protocol support (32-bit)

### Features
- Dual-mode operation (Learn/Transmit)
- Real-time mode switching
- Button debouncing and response handling
- IR signal validation and storage
- Comprehensive pin configuration for Arduino Nano

### Hardware Support
- Arduino Nano compatibility
- IR LED transmission circuit
- TSOP38238 IR receiver module
- 8 push button interface
- Mode toggle switch
- Status indicator LED

## [Unreleased]

### Planned Features
- Support for additional IR protocols (NEC, RC5, RC6)
- EEPROM storage for persistent IR code memory
- LCD display for better user interface
- Bluetooth/WiFi connectivity for smartphone control
- Multiple device profiles support
- IR code database integration

### Planned Improvements
- Enhanced error handling and validation
- Power management and sleep modes
- Extended range IR transmission
- Multi-frequency IR support
- Advanced button mapping options

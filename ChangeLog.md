# QGroundControl Change Log

Note: This file only contains high level features or important fixes.

## 3.5

### 3.5.0 - Daily Build
* Add support for specifying fixed RTK based station location in Settings/General.
* Added Airmap integration to QGC
* Added ESTIMATOR_STATUS values to new estimatorStatus Vehicle FactGroup. These are now available to display in instrument panel.
* Added Chinese and Turkish localization and partial German localization. 
* Make Distance to GCS available for display from instrument panel.
* Make Heading to Home available for display from instrument panel.
* Edit Position dialog available on polygon vertices.
* Fixed Wing Landing Pattern: Add stop photo/video support. Defaults to on such that doing an RTL will stop camera.
* Survey Planning: add mode that supports concave polygons
* Support loading polygons from SHP files

## 3.4

### 3.4.5 - Not yet released
* Plan GeoFence: Fix loading of fence from intermediate 3.4 code
* Orbit: Turn off for PX4 since still not supported
* Structure Scan: Fix loading of structure scan height
* ArduPilot: Fix location of planned home position when not connected to vehicle. Issue #6840.
* Fix loading of parameters from multiple components. Would report download complete too early, thus missing all default component params.

### 3.4.4 - Stable
* Stable desktop versions now inform user at boot if newer version is available.
* Multi-Vehicle Start Mission and Pause now work correctly. Issue #6864.

### 3.4.3
* Fix bug where Resume Mission would not display correctly in some cases. Issue #6835.
* Fix Planned Home Position altitude when no terrain data available. Issue #6846.

### 3.4.2
* Fix bug where new mission items may end up with 0 altitude internally and sent to vehicle while UI shows correct altitude. Issue #6823.

### 3.4.1
* Fix crash when Survery with terrain follow is moved quickly
* Fix terrain follow climb/descent rate fields swapped in ui


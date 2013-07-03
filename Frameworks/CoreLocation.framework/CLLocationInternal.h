/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLLocationInternal : NSObject  {
    struct { 
        int padding1; 
        int suitability; 
        struct { 
            double latitude; 
            double longitude; 
        } coordinate; 
        double horizontalAccuracy; 
        double altitude; 
        double verticalAccuracy; 
        double padding2; 
        double padding3; 
        double speed; 
        double speedAccuracy; 
        double course; 
        double courseAccuracy; 
        double timestamp; 
        int confidence; 
        double lifespan; 
        int type; 
        struct { 
            double latitude; 
            double longitude; 
        } rawCoordinate; 
        double rawCourse; 
    } fLocation;
}


- (id)initWithClientLocation:(struct { int x1; int x2; struct { double x_3_1_1; double x_3_1_2; } x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; int x14; double x15; int x16; struct { double x_17_1_1; double x_17_1_2; } x17; double x18; })arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
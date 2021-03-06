/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class VKMapSnapshot, UIImage;

@interface MKMapSnapshot : NSObject {

	VKMapSnapshot* _snapshot;
	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
-(id)snapshotWithAnnotationView:(id)arg1 atPoint:(CGPoint)arg2 ;
-(id)snapshotWithAnnotationView:(id)arg1 atCoordinate:(SCD_Struct_MK1)arg2 ;
-(CGPoint)pointForCoordinate:(SCD_Struct_MK1)arg1 ;
-(char)_hasNoDataPlaceholders;
-(SCD_Struct_MK1)_coordinateForPoint:(CGPoint)arg1 ;
-(id)_initWithSnapshot:(id)arg1 ;
-(UIImage *)image;
@end


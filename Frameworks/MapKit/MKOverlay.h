/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol MKOverlay <MKAnnotation>
@property (nonatomic,readonly) SCD_Struct_MK1 coordinate; 
@property (nonatomic,readonly) SCD_Struct_MK2 boundingMapRect; 
@optional
-(char)intersectsMapRect:(SCD_Struct_MK2)arg1;
-(char)canReplaceMapContent;

@required
-(SCD_Struct_MK2)boundingMapRect;
-(SCD_Struct_MK1)coordinate;

@end


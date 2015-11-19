/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:36 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class MKMapView;

@interface SiriUIMapCollectionViewCell : SiriUIContentCollectionViewCell {

	MKMapView* _mapView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)unloadExpensiveViews;
-(void)_setCoordinate:(SCD_Struct_Si6)arg1 ;
-(void)setLatitude:(double)arg1 longitude:(double)arg2 ;
@end


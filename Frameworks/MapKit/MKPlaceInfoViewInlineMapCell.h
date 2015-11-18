/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactCell.h>

@class UIImage, UIImageView, NSArray;

@interface MKPlaceInfoViewInlineMapCell : ABContactCell {

	UIImage* _inlineMap;
	UIImageView* _inlineMapView;
	NSArray* _marginConstraints;

}

@property (nonatomic,retain) UIImage * inlineMap;                      //@synthesize inlineMap=_inlineMap - In the implementation block
@property (nonatomic,retain) UIImageView * inlineMapView;              //@synthesize inlineMapView=_inlineMapView - In the implementation block
@property (nonatomic,retain) NSArray * marginConstraints;              //@synthesize marginConstraints=_marginConstraints - In the implementation block
+(char)requiresConstraintBasedLayout;
+(id)reuseIdentifier;
-(void)refreshMarginConstraints;
-(NSArray *)marginConstraints;
-(void)setMarginConstraints:(NSArray *)arg1 ;
-(UIImage *)inlineMap;
-(void)setInlineMap:(UIImage *)arg1 ;
-(void)setInlineMapView:(UIImageView *)arg1 ;
-(UIImageView *)inlineMapView;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutMarginsDidChange;
@end


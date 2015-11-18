/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:29 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSMutableArray;

@interface MKStarRatingView : UIView {

	float _rating;
	int _numLevels;
	float _padding;
	char _highlighted;
	UIImage* _fullStarImage;
	UIImage* _halfStarImage;
	UIImage* _emptyStarImage;
	UIImage* _fullStarHighlightedImage;
	UIImage* _halfStarHighlightedImage;
	UIImage* _emptyStarHighlightedImage;
	NSMutableArray* _ratingViews;
	int _numReviews;
	int _starStyle;

}

@property (assign,nonatomic) int numberOfRatingLevels;                           //@synthesize numLevels=_numLevels - In the implementation block
@property (assign,nonatomic) float rating;                                       //@synthesize rating=_rating - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) char highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) UIImage * fullStarImage;                            //@synthesize fullStarImage=_fullStarImage - In the implementation block
@property (nonatomic,retain) UIImage * halfStarImage;                            //@synthesize halfStarImage=_halfStarImage - In the implementation block
@property (nonatomic,retain) UIImage * emptyStarImage;                           //@synthesize emptyStarImage=_emptyStarImage - In the implementation block
@property (nonatomic,retain) UIImage * fullStarHighlightedImage;                 //@synthesize fullStarHighlightedImage=_fullStarHighlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * halfStarHighlightedImage;                 //@synthesize halfStarHighlightedImage=_halfStarHighlightedImage - In the implementation block
@property (nonatomic,retain) UIImage * emptyStarHighlightedImage;                //@synthesize emptyStarHighlightedImage=_emptyStarHighlightedImage - In the implementation block
@property (assign,nonatomic) int starStyle;                                      //@synthesize starStyle=_starStyle - In the implementation block
-(UIImage *)halfStarHighlightedImage;
-(void)setStarStyle:(int)arg1 ;
-(int)numberOfRatingLevels;
-(void)setEmptyStarImage:(UIImage *)arg1 ;
-(int)starStyle;
-(UIImage *)fullStarHighlightedImage;
-(void)setFullStarImage:(UIImage *)arg1 ;
-(void)_layoutStarViewsCreatingIfNeeded:(char)arg1 ;
-(UIImage *)emptyStarImage;
-(void)setEmptyStarHighlightedImage:(UIImage *)arg1 ;
-(void)setFullStarHighlightedImage:(UIImage *)arg1 ;
-(UIImage *)halfStarImage;
-(void)setHalfStarImage:(UIImage *)arg1 ;
-(UIImage *)fullStarImage;
-(id)imageWithName:(id)arg1 andColor:(id)arg2 ;
-(float)verticalAlignmentCenterPercentage;
-(void)setNumberOfRatingLevels:(int)arg1 ;
-(UIImage *)emptyStarHighlightedImage;
-(void)setHalfStarHighlightedImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(char)arg1 ;
-(char)isHighlighted;
-(void)setPadding:(float)arg1 ;
-(void)commonInit;
-(float)rating;
-(void)setRating:(float)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:52 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIViewElementText;

@interface SKUITomatoRatingViewElement : SKUIViewElement {

	int _freshness;
	float _tomatoRating;
	SKUIViewElementText* _ratingText;

}

@property (nonatomic,readonly) int freshness;                                 //@synthesize freshness=_freshness - In the implementation block
@property (nonatomic,readonly) float tomatoRating;                            //@synthesize tomatoRating=_tomatoRating - In the implementation block
@property (nonatomic,readonly) SKUIViewElementText * ratingText;              //@synthesize ratingText=_ratingText - In the implementation block
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)freshness;
-(float)tomatoRating;
-(SKUIViewElementText *)ratingText;
@end


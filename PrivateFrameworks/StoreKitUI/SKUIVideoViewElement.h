/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <StoreKitUI/SKUIViewElement.h>

@class SKUIImageViewElement, NSArray;

@interface SKUIVideoViewElement : SKUIViewElement {

	char _enabled;
	long long _itemIdentifier;
	int _playbackStyle;
	SKUIImageViewElement* _thumbnailImage;

}

@property (nonatomic,readonly) NSArray * assets; 
@property (nonatomic,readonly) long long itemIdentifier;                           //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
@property (nonatomic,readonly) int playbackStyle;                                  //@synthesize playbackStyle=_playbackStyle - In the implementation block
@property (nonatomic,readonly) SKUIImageViewElement * thumbnailImage;              //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
-(NSArray *)assets;
-(SKUIImageViewElement *)thumbnailImage;
-(char)isEnabled;
-(long long)itemIdentifier;
-(id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3 ;
-(id)applyUpdatesWithElement:(id)arg1 ;
-(int)playbackStyle;
@end


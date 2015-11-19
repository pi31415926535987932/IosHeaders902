/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:57 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@class NSMutableArray, NSArray;

@interface SKUIHorizontalLockupColumn : NSObject {

	NSMutableArray* _childViewElements;
	int _identifier;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSArray * childViewElements;              //@synthesize childViewElements=_childViewElements - In the implementation block
@property (assign,nonatomic) int identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) CGSize size;                                     //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(id)init;
-(id)description;
-(int)identifier;
-(void)setSize:(CGSize)arg1 ;
-(void)setIdentifier:(int)arg1 ;
-(NSArray *)childViewElements;
-(void)_addChildViewElement:(id)arg1 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Monday, November 16, 2015 at 11:35:53 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@interface SBStarkIconLayoutOverrideStrategy : NSObject {

	UIEdgeInsets _layoutInsets;
	char _preservesCurrentListOrigin;

}

@property (nonatomic,readonly) UIEdgeInsets layoutInsets;                    //@synthesize layoutInsets=_layoutInsets - In the implementation block
@property (nonatomic,readonly) char preservesCurrentListOrigin;              //@synthesize preservesCurrentListOrigin=_preservesCurrentListOrigin - In the implementation block
-(char)preservesCurrentListOrigin;
-(UIEdgeInsets)layoutInsets;
-(id)initWithFullscreenOverrideStrategyForConfiguration:(id)arg1 ;
@end

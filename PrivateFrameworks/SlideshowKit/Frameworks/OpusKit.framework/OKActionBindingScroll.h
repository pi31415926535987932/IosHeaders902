/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <OpusKit/OpusKit-Structs.h>
#import <OpusKit/OKActionBinding.h>

@interface OKActionBindingScroll : OKActionBinding {

	unsigned _triggerLimit;
	unsigned _probability;
	CGPoint _offset;
	char _continuous;

}

@property (assign,nonatomic) CGPoint offset;              //@synthesize offset=_offset - In the implementation block
+(id)supportedSettings;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setOffset:(CGPoint)arg1 ;
-(CGPoint)offset;
-(id)initWithSettings:(id)arg1 ;
-(void)unload;
-(id)settingObjectForKey:(id)arg1 ;
-(void)loadForResponder:(id)arg1 scope:(unsigned)arg2 ;
-(char)respondsToAction:(id)arg1 isTouchCountAgnostic:(char)arg2 ;
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:18:29 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class SCRCArgumentHolderPrivate;

@interface SCRCArgumentHolder : NSObject {

	SCRCArgumentHolderPrivate* _private;

}
-(id)option;
-(id)argument;
-(void)setArgument:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(int)compare:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
-(char)process;
-(id)argumentDescription;
-(void)setArgumentDescription:(id)arg1 ;
-(void)setIsRequired:(char)arg1 ;
-(char)isRequired;
-(void)setOption:(id)arg1 ;
@end


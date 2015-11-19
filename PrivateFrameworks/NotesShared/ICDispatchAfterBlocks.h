/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:34 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@protocol NSCopying;
@interface ICDispatchAfterBlocks : NSObject {

	id<NSCopying> _identifier;

}

@property (nonatomic,copy) id<NSCopying> identifier;              //@synthesize identifier=_identifier - In the implementation block
-(id<NSCopying>)identifier;
-(void)setIdentifier:(id<NSCopying>)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)performBlock:(/*^block*/id)arg1 ;
-(void)dispatchAfter:(double)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)cancelAll;
@end


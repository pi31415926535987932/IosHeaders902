/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:04 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray;

@interface VMUClassInfoMap : NSObject <NSSecureCoding> {

	void* _map1;
	void* _map2;
	NSMutableArray* _linearClassInfos;

}

@property (nonatomic,readonly) unsigned count; 
+(char)supportsSecureCoding;
+(void)initialize;
+(void)_claimUnarchivingOfClass:(id)arg1 ;
+(void)_destroyRetainedLinearArray:(id*)arg1 withCount:(unsigned)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(unsigned)count;
-(id)init;
-(id)classInfoForAddress:(unsigned long long)arg1 ;
-(unsigned)addClassInfo:(id)arg1 forAddress:(unsigned long long)arg2 ;
-(unsigned)indexForClassInfo:(id)arg1 ;
-(id)classInfoForIndex:(unsigned)arg1 ;
-(void)enumerateInfosWithBlock:(/*^block*/id)arg1 ;
-(void)addClassInfosFromMap:(id)arg1 ;
-(void)enumerateWithBlock:(/*^block*/id)arg1 ;
-(id*)_retainedLinearArrayWithReturnedCount:(unsigned*)arg1 ;
@end


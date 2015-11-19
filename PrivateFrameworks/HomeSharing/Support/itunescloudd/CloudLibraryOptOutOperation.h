/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:16:46 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HomeSharing.framework/Support/itunescloudd
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <itunescloudd/CloudLibraryOperation.h>

@class NSString;

@interface CloudLibraryOptOutOperation : CloudLibraryOperation {

	NSString* _cuid;
	NSString* _troveID;

}

@property (nonatomic,copy) NSString * cuid;                 //@synthesize cuid=_cuid - In the implementation block
@property (nonatomic,copy) NSString * troveID;              //@synthesize troveID=_troveID - In the implementation block
-(NSString *)cuid;
-(void)setCuid:(NSString *)arg1 ;
-(NSString *)troveID;
-(void)_sendOptOutWithCUID:(id)arg1 troveID:(id)arg2 ;
-(id)initWithCUID:(id)arg1 troveID:(id)arg2 ;
-(void)setTroveID:(NSString *)arg1 ;
-(void)main;
@end


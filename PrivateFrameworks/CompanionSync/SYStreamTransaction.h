/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:39 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

@class NSDictionary, NSProgress;


@protocol SYStreamTransaction <NSObject>
@property (nonatomic,readonly) int type; 
@property (nonatomic,readonly) NSDictionary * metadata; 
@property (nonatomic,readonly) NSProgress * progress; 
@required
-(int)type;
-(NSProgress *)progress;
-(NSDictionary *)metadata;

@end

/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSData, NSString, _DKEventMO, _DKSourceMO, NSSet;

@interface _DKObjectMO : NSManagedObject

@property (assign,nonatomic) double creationDate; 
@property (nonatomic,retain) NSData * metadata; 
@property (nonatomic,retain) NSString * uuid; 
@property (assign,nonatomic) long long uuidHash; 
@property (nonatomic,retain) _DKEventMO * event; 
@property (nonatomic,retain) _DKSourceMO * source; 
@property (nonatomic,retain) NSSet * relationSubject; 
@property (nonatomic,retain) NSSet * relationObject; 
@end


/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:19:05 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSString, NSNumber, NSSet;

@interface NetworkAttachment : NSManagedObject

@property (nonatomic,retain) NSDate * firstTimeStamp; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSNumber * isKnownGood; 
@property (nonatomic,retain) NSNumber * kind; 
@property (nonatomic,retain) NSNumber * overallStayMean; 
@property (nonatomic,retain) NSNumber * overallStayVar; 
@property (nonatomic,retain) NSString * service; 
@property (nonatomic,retain) NSDate * timeStamp; 
@property (nonatomic,retain) NSNumber * velo; 
@property (nonatomic,retain) NSNumber * wasLastFailed; 
@property (nonatomic,retain) NSNumber * attrs; 
@property (nonatomic,retain) NSSet * hasDefaultRoute; 
@property (nonatomic,retain) NSSet * supportsFlows; 
@end


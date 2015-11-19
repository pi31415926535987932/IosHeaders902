/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:43 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <libobjc.A.dylib/_CDPDataPoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray, NSString, NSURL, _CDContact;

@interface _CDInteraction : NSObject <_CDPDataPoint, NSSecureCoding> {

	char _isResponse;
	NSDate* _startDate;
	NSDate* _endDate;
	NSString* _uuid;
	NSString* _locationUUID;
	int _mechanism;
	int _direction;
	NSString* _bundleId;
	NSURL* _contentURL;
	NSString* _domainIdentifier;
	NSString* _account;
	_CDContact* _sender;
	NSArray* _recipients;
	NSArray* _keywords;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char userIsSender; 
@property (nonatomic,readonly) NSDate * timestamp; 
@property (nonatomic,readonly) NSArray * peopleIdentifiers; 
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) char userIsThreadInitiator; 
@property (retain) NSDate * startDate;                                   //@synthesize startDate=_startDate - In the implementation block
@property (retain) NSDate * endDate;                                     //@synthesize endDate=_endDate - In the implementation block
@property (retain) NSString * uuid;                                      //@synthesize uuid=_uuid - In the implementation block
@property (retain) NSString * locationUUID;                              //@synthesize locationUUID=_locationUUID - In the implementation block
@property (assign) int mechanism;                                        //@synthesize mechanism=_mechanism - In the implementation block
@property (assign) int direction;                                        //@synthesize direction=_direction - In the implementation block
@property (assign) char isResponse;                                      //@synthesize isResponse=_isResponse - In the implementation block
@property (retain) NSString * bundleId;                                  //@synthesize bundleId=_bundleId - In the implementation block
@property (retain) NSURL * contentURL;                                   //@synthesize contentURL=_contentURL - In the implementation block
@property (retain) NSString * domainIdentifier;                          //@synthesize domainIdentifier=_domainIdentifier - In the implementation block
@property (retain) NSString * account;                                   //@synthesize account=_account - In the implementation block
@property (retain) _CDContact * sender;                                  //@synthesize sender=_sender - In the implementation block
@property (retain) NSArray * recipients;                                 //@synthesize recipients=_recipients - In the implementation block
@property (retain) NSArray * keywords;                                   //@synthesize keywords=_keywords - In the implementation block
+(char)supportsSecureCoding;
-(int)mechanism;
-(void)setLocationUUID:(NSString *)arg1 ;
-(void)setContentURL:(NSURL *)arg1 ;
-(NSURL *)contentURL;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(NSDate *)timestamp;
-(NSString *)title;
-(void)setDirection:(int)arg1 ;
-(int)direction;
-(_CDContact *)sender;
-(NSString *)bundleId;
-(void)setBundleId:(NSString *)arg1 ;
-(NSString *)uuid;
-(void)setSender:(_CDContact *)arg1 ;
-(NSString *)domainIdentifier;
-(void)setMechanism:(int)arg1 ;
-(NSString *)locationUUID;
-(id)descriptionOfArray:(id)arg1 ;
-(NSArray *)peopleIdentifiers;
-(char)userIsSender;
-(char)userIsThreadInitiator;
-(void)setIsResponse:(char)arg1 ;
-(char)isResponse;
-(void)setKeywords:(NSArray *)arg1 ;
-(NSArray *)keywords;
-(void)setUuid:(NSString *)arg1 ;
-(void)setDomainIdentifier:(NSString *)arg1 ;
-(void)setAccount:(NSString *)arg1 ;
-(NSString *)account;
-(void)setEndDate:(NSDate *)arg1 ;
-(void)setStartDate:(NSDate *)arg1 ;
@end


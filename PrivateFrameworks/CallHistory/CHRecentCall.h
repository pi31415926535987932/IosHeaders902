/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:15:13 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CallHistory/CallHistory-Structs.h>
#import <CallHistory/CHSynchronizable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol CHPhoneBookManagerProtocol;
@class NSString, NSDate, NSNumber, NSMutableArray, NSValue;

@interface CHRecentCall : CHSynchronizable <NSSecureCoding, NSCopying> {

	char _read;
	char _callerIdIsBlocked;
	char _multiCall;
	char _answered;
	char _mobileOriginated;
	unsigned _callerIdAvailability;
	NSString* _callerNetworkName;
	NSString* _uniqueId;
	NSString* _devicePhoneId;
	NSString* _callerId;
	unsigned _callType;
	unsigned _callStatus;
	NSDate* _date;
	NSNumber* _bytesOfDataUsed;
	NSString* _isoCountryCode;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSNumber* _disconnectedCause;
	NSString* _callerNetworkFirstName;
	NSString* _callerNetworkSecondName;
	NSString* _callerIdLabel;
	NSString* _callerIdLocation;
	unsigned _unreadCount;
	NSMutableArray* _callOccurrences;
	NSString* _addressBookRecordId;
	NSValue* _addressBookRecordRef;
	NSString* _addressBookCallerIDMultiValueId;
	NSString* _clientAddressBookRecordId;
	NSString* _callerName;
	NSString* _callerIdFormatted;
	id<CHPhoneBookManagerProtocol> _phoneBookManager;
	double _duration;

}

@property (copy) NSString * uniqueId;                                                           //@synthesize uniqueId=_uniqueId - In the implementation block
@property (copy) NSString * devicePhoneId;                                                      //@synthesize devicePhoneId=_devicePhoneId - In the implementation block
@property (copy) NSString * callerId;                                                           //@synthesize callerId=_callerId - In the implementation block
@property (nonatomic,copy) NSString * callerNetworkName;                                        //@synthesize callerNetworkName=_callerNetworkName - In the implementation block
@property (assign) unsigned callType;                                                           //@synthesize callType=_callType - In the implementation block
@property (assign) unsigned callStatus;                                                         //@synthesize callStatus=_callStatus - In the implementation block
@property (copy) NSDate * date;                                                                 //@synthesize date=_date - In the implementation block
@property (assign) double duration;                                                             //@synthesize duration=_duration - In the implementation block
@property (copy) NSNumber * bytesOfDataUsed;                                                    //@synthesize bytesOfDataUsed=_bytesOfDataUsed - In the implementation block
@property (assign,nonatomic) char read;                                                         //@synthesize read=_read - In the implementation block
@property (copy) NSString * isoCountryCode;                                                     //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (copy) NSString * mobileCountryCode;                                                  //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (copy) NSString * mobileNetworkCode;                                                  //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (copy) NSNumber * disconnectedCause;                                                  //@synthesize disconnectedCause=_disconnectedCause - In the implementation block
@property (assign,nonatomic) unsigned callerIdAvailability;                                     //@synthesize callerIdAvailability=_callerIdAvailability - In the implementation block
@property (assign) char callerIdIsBlocked;                                                      //@synthesize callerIdIsBlocked=_callerIdIsBlocked - In the implementation block
@property (copy) NSString * callerNetworkFirstName;                                             //@synthesize callerNetworkFirstName=_callerNetworkFirstName - In the implementation block
@property (copy) NSString * callerNetworkSecondName;                                            //@synthesize callerNetworkSecondName=_callerNetworkSecondName - In the implementation block
@property (nonatomic,copy) NSString * callerIdLabel;                                            //@synthesize callerIdLabel=_callerIdLabel - In the implementation block
@property (nonatomic,copy) NSString * callerIdLocation;                                         //@synthesize callerIdLocation=_callerIdLocation - In the implementation block
@property (assign) unsigned unreadCount;                                                        //@synthesize unreadCount=_unreadCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * callOccurrences;                                  //@synthesize callOccurrences=_callOccurrences - In the implementation block
@property (nonatomic,copy) NSString * addressBookRecordId;                                      //@synthesize addressBookRecordId=_addressBookRecordId - In the implementation block
@property (copy) NSValue * addressBookRecordRef;                                                //@synthesize addressBookRecordRef=_addressBookRecordRef - In the implementation block
@property (nonatomic,copy) NSString * addressBookCallerIDMultiValueId;                          //@synthesize addressBookCallerIDMultiValueId=_addressBookCallerIDMultiValueId - In the implementation block
@property (copy) NSString * clientAddressBookRecordId;                                          //@synthesize clientAddressBookRecordId=_clientAddressBookRecordId - In the implementation block
@property (nonatomic,copy) NSString * callerName;                                               //@synthesize callerName=_callerName - In the implementation block
@property (assign) char multiCall;                                                              //@synthesize multiCall=_multiCall - In the implementation block
@property (getter=callerIdForDisplay,nonatomic,copy) NSString * callerIdFormatted;              //@synthesize callerIdFormatted=_callerIdFormatted - In the implementation block
@property (retain) id<CHPhoneBookManagerProtocol> phoneBookManager;                             //@synthesize phoneBookManager=_phoneBookManager - In the implementation block
@property (assign) char answered;                                                               //@synthesize answered=_answered - In the implementation block
@property (assign) char mobileOriginated;                                                       //@synthesize mobileOriginated=_mobileOriginated - In the implementation block
+(char)supportsSecureCoding;
+(id)getLocationForCallerId:(id)arg1 andIsoCountryCode:(id)arg2 ;
+(id)callTypeAsString:(unsigned)arg1 ;
+(id)callStatusAsString:(unsigned)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(NSDate *)date;
-(id)initWithQueue:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)uniqueId;
-(char)answered;
-(void)setAnswered:(char)arg1 ;
-(char)coalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(id)coalescingHash;
-(unsigned)numberOfOccurrences;
-(NSMutableArray *)callOccurrences;
-(void)setBytesOfDataUsed:(NSNumber *)arg1 ;
-(void)setCallOccurrences:(NSMutableArray *)arg1 ;
-(void)setMultiCall:(char)arg1 ;
-(char)multiCall;
-(NSNumber *)disconnectedCause;
-(NSNumber *)bytesOfDataUsed;
-(NSString *)callerNetworkName;
-(unsigned)callerIdAvailability;
-(NSString *)devicePhoneId;
-(void)setDisconnectedCause:(NSNumber *)arg1 ;
-(void)setCallerNetworkName:(NSString *)arg1 ;
-(void)setCallerIdAvailability:(unsigned)arg1 ;
-(void)setDevicePhoneId:(NSString *)arg1 ;
-(void)setCallerIdLocation:(NSString *)arg1 ;
-(void)setPhoneBookManager:(id<CHPhoneBookManagerProtocol>)arg1 ;
-(id)callerIdForDisplay;
-(void)setCallerIdFormatted:(NSString *)arg1 ;
-(void)setMobileCountryCode:(NSString *)arg1 ;
-(void)setMobileNetworkCode:(NSString *)arg1 ;
-(void)setCallerIdIsBlocked:(char)arg1 ;
-(NSString *)callerNetworkFirstName;
-(void)setCallerNetworkFirstName:(NSString *)arg1 ;
-(NSString *)callerNetworkSecondName;
-(void)setCallerNetworkSecondName:(NSString *)arg1 ;
-(void)setCallerIdLabel:(NSString *)arg1 ;
-(void)setAddressBookRecordId:(NSString *)arg1 ;
-(void)setAddressBookCallerIDMultiValueId:(NSString *)arg1 ;
-(void)setAddressBookRecordRef:(NSValue *)arg1 ;
-(NSString *)clientAddressBookRecordId;
-(void)setClientAddressBookRecordId:(NSString *)arg1 ;
-(id)callerNameSync;
-(void)setCallerName:(NSString *)arg1 ;
-(id)addressBookRecordIdSync;
-(char)isAddressBookContactASuggestionSync;
-(char)canCoalesceSyncWithRecentsStrategyWithCall:(id)arg1 ;
-(char)canCoalesceSyncWithCollapseIfEqualStrategyWithCall:(id)arg1 ;
-(char)canCoalesceSyncWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(id)callOccurrencesSync;
-(void)addOccurrencesFromArraySync:(id)arg1 ;
-(unsigned)numberOfOccurrencesSync;
-(void)createOccurrenceArraySync;
-(char)callerIdIsEmailAddressSync;
-(id<CHPhoneBookManagerProtocol>)phoneBookManager;
-(void)fetchAndSetAddressBookIdsSync;
-(id)addressBookCallerIDMultiValueIdSync;
-(id)addressBookRecordRefSync;
-(id)callerIdForDisplaySync;
-(id)getLocalizedStringSync:(id)arg1 ;
-(id)callerNameForDisplaySync;
-(id)callerIdLabelSync;
-(id)callerIdLocationSync;
-(id)callOccurrencesAsStringSync;
-(char)canCoalesceWithCall:(id)arg1 withStrategy:(id)arg2 ;
-(NSString *)addressBookCallerIDMultiValueId;
-(char)callerIdIsEmailAddress;
-(NSString *)callerName;
-(NSString *)callerIdLabel;
-(NSString *)callerIdLocation;
-(char)representsCallAtDate:(id)arg1 ;
-(char)isAddressBookContactASuggestion;
-(id)descriptionInDepth;
-(NSValue *)addressBookRecordRef;
-(char)mobileOriginated;
-(void)setMobileOriginated:(char)arg1 ;
-(unsigned)unreadCount;
-(void)setCallerId:(NSString *)arg1 ;
-(void)setUniqueId:(NSString *)arg1 ;
-(void)setUnreadCount:(unsigned)arg1 ;
-(void)setRead:(char)arg1 ;
-(char)read;
-(void)addressBookChanged;
-(NSString *)mobileCountryCode;
-(NSString *)mobileNetworkCode;
-(NSString *)isoCountryCode;
-(NSString *)callerId;
-(char)callerIdIsBlocked;
-(id)callerNameForDisplay;
-(id)callerIdSubStringForDisplay;
-(NSString *)addressBookRecordId;
-(void)setIsoCountryCode:(NSString *)arg1 ;
-(void)setCallType:(unsigned)arg1 ;
-(void)setCallStatus:(unsigned)arg1 ;
-(unsigned)callType;
-(unsigned)callStatus;
@end

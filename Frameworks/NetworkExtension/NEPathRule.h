/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:36:09 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <NetworkExtension/NEAppRule.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>

@class NSNumber;

@interface NEPathRule : NEAppRule <NEConfigurationValidating, NEPrettyDescription> {

	char _denyCellularFallback;
	NSNumber* _aggregatePersonalCellular;
	NSNumber* _aggregateEnterpriseCellular;
	int _internalCellularBehavior;

}

@property (getter=isDefaultPathRule,readonly) char defaultPathRule; 
@property (assign) int cellularBehavior; 
@property (assign) char denyCellularFallback;                                    //@synthesize denyCellularFallback=_denyCellularFallback - In the implementation block
@property (retain) NSNumber * aggregatePersonalCellular;                         //@synthesize aggregatePersonalCellular=_aggregatePersonalCellular - In the implementation block
@property (retain) NSNumber * aggregateEnterpriseCellular;                       //@synthesize aggregateEnterpriseCellular=_aggregateEnterpriseCellular - In the implementation block
@property (assign) int internalCellularBehavior;                                 //@synthesize internalCellularBehavior=_internalCellularBehavior - In the implementation block
+(int)aggregateNetworkBehavior:(int)arg1 other:(int)arg2 ;
+(char)supportsSecureCoding;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned)arg2 ;
-(int)cellularBehavior;
-(void)setCellularBehavior:(int)arg1 ;
-(char)signingIdentifierAllowed:(id)arg1 domainsRequired:(out char*)arg2 ;
-(int)internalCellularBehavior;
-(char)denyCellularFallback;
-(NSNumber *)aggregateEnterpriseCellular;
-(NSNumber *)aggregatePersonalCellular;
-(void)setInternalCellularBehavior:(int)arg1 ;
-(void)setDenyCellularFallback:(char)arg1 ;
-(void)setAggregateEnterpriseCellular:(NSNumber *)arg1 ;
-(void)setAggregatePersonalCellular:(NSNumber *)arg1 ;
-(char)isAggregateRule;
-(char)supportsCellularBehavior:(int)arg1 ;
-(id)initDefaultPathRule;
-(char)isDefaultPathRule;
-(void)addCellularBehavior:(int)arg1 grade:(int)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end


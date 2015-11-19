/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 10:17:01 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <MPUFoundation/MPUFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MIPMultiverseIdentifier;

@interface _MPUProtoBufUserActivityContainerItem : PBCodable <NSCopying> {

	int _containerItemType;
	MIPMultiverseIdentifier* _selectedMultiverseIdentifier;
	MIPMultiverseIdentifier* _visualReferenceMultiverseIdentifier;
	SCD_Struct_MP3 _has;

}

@property (assign,nonatomic) char hasContainerItemType; 
@property (assign,nonatomic) int containerItemType;                                                      //@synthesize containerItemType=_containerItemType - In the implementation block
@property (nonatomic,readonly) char hasSelectedMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * selectedMultiverseIdentifier;                     //@synthesize selectedMultiverseIdentifier=_selectedMultiverseIdentifier - In the implementation block
@property (nonatomic,readonly) char hasVisualReferenceMultiverseIdentifier; 
@property (nonatomic,retain) MIPMultiverseIdentifier * visualReferenceMultiverseIdentifier;              //@synthesize visualReferenceMultiverseIdentifier=_visualReferenceMultiverseIdentifier - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(int)containerItemType;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSelectedMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setVisualReferenceMultiverseIdentifier:(MIPMultiverseIdentifier *)arg1 ;
-(void)setContainerItemType:(int)arg1 ;
-(void)setHasContainerItemType:(char)arg1 ;
-(char)hasContainerItemType;
-(char)hasSelectedMultiverseIdentifier;
-(char)hasVisualReferenceMultiverseIdentifier;
-(MIPMultiverseIdentifier *)selectedMultiverseIdentifier;
-(MIPMultiverseIdentifier *)visualReferenceMultiverseIdentifier;
-(char)readFrom:(id)arg1 ;
@end


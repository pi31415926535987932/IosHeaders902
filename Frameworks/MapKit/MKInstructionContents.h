/*
* This header is generated by classdump-dyld 0.7
* on Wednesday, November 18, 2015 at 6:30:28 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class NSString, NSArray;

@interface MKInstructionContents : NSObject {

	int _maneuverType;
	int _transportType;
	NSString* _intersectionName;
	NSString* _destinationName;
	NSString* _exitNumber;
	NSArray* _branchNames;
	NSArray* _towardNames;
	int _junctionAngle;
	char _toFreeway;

}

@property (assign,nonatomic) int maneuverType;                         //@synthesize maneuverType=_maneuverType - In the implementation block
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,retain) NSString * intersectionName;              //@synthesize intersectionName=_intersectionName - In the implementation block
@property (nonatomic,retain) NSString * destinationName;               //@synthesize destinationName=_destinationName - In the implementation block
@property (nonatomic,retain) NSString * exitNumber;                    //@synthesize exitNumber=_exitNumber - In the implementation block
@property (nonatomic,retain) NSArray * branchNames;                    //@synthesize branchNames=_branchNames - In the implementation block
@property (nonatomic,retain) NSArray * towardNames;                    //@synthesize towardNames=_towardNames - In the implementation block
@property (assign,nonatomic) int transportType;                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) char useRoadName; 
@property (nonatomic,readonly) char useTowardNames; 
@property (nonatomic,readonly) char useIntersectionName; 
@property (nonatomic,readonly) char useDestinationName; 
@property (nonatomic,readonly) char hasName; 
@property (nonatomic,readonly) NSString * primaryName; 
@property (nonatomic,readonly) char isExitManeuver; 
@property (assign,nonatomic) char toFreeway;                           //@synthesize toFreeway=_toFreeway - In the implementation block
@property (assign,nonatomic) int junctionAngle;                        //@synthesize junctionAngle=_junctionAngle - In the implementation block
+(id)contentsWithStep:(id)arg1 transportType:(int)arg2 ;
+(id)contentsWithManeuverType:(int)arg1 transportType:(int)arg2 ;
+(id)contentsWithSubstep:(id)arg1 transportType:(int)arg2 ;
-(NSArray *)branchNames;
-(id)_walkingInstructionForStart;
-(void)setBranchNames:(NSArray *)arg1 ;
-(id)_exitNumberFromNameInfo:(id)arg1 ;
-(id)_walkingInstructionForContinue;
-(void)setTowardNames:(NSArray *)arg1 ;
-(NSString *)intersectionName;
-(id)_walkingInstructionForRoundabout;
-(id)_walkingInstructionForUTurn;
-(NSString *)primaryName;
-(void)setIntersectionName:(NSString *)arg1 ;
-(char)useDestinationName;
-(NSArray *)towardNames;
-(id)_instructionForFerry;
-(char)useRoadName;
-(id)_instructionsForSigns;
-(id)_instructionForBranch;
-(void)_populateFromSubstep:(id)arg1 ;
-(id)_stringFromNameInfo:(id)arg1 ;
-(id)_instructionForRoundabout;
-(char)useIntersectionName;
-(id)_instructionForExit;
-(id)_instructionForTurn;
-(void)setName:(id)arg1 signposts:(id)arg2 ;
-(void)_populateFromStep:(id)arg1 ;
-(id)_instructionForStart;
-(char)useTowardNames;
-(id)_instructionForUTurn;
-(void)setJunctionAngle:(int)arg1 ;
-(int)junctionAngle;
-(id)_instructionForArrival;
-(id)instruction;
-(id)_instructionForChangeHighway;
-(id)_walkingInstructionForTurn;
-(id)_instructionForContinue;
-(char)isExitManeuver;
-(id)init;
-(id)description;
-(NSString *)destinationName;
-(void)setTransportType:(int)arg1 ;
-(int)transportType;
-(char)hasName;
-(char)toFreeway;
-(void)setToFreeway:(char)arg1 ;
-(NSString *)exitNumber;
-(void)setExitNumber:(NSString *)arg1 ;
-(int)maneuverType;
-(void)setManeuverType:(int)arg1 ;
-(void)setDestinationName:(NSString *)arg1 ;
-(NSString *)roadName;
-(void)setRoadName:(NSString *)arg1 ;
@end


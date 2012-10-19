/**
 * Constants specifying field size and location of objects. Note that the
 * coordinate system is goalie-centric, unlike the usual nbites setup!
 */

#ifndef FieldConstants_h_DEFINED
#define FieldConstants_h_DEFINED

static const float FIELD_WIDTH            = 400.f;
static const float GREEN_EDGE_WIDTH       = 70.f;
static const float GREEN_WIDTH            = FIELD_WIDTH +
                                            2.0f * GREEN_EDGE_WIDTH;

static const float FIELD_LENGTH           = 600.f;
static const float GREEN_LENGTH           = FIELD_LENGTH +
                                            2.0f * GREEN_EDGE_WIDTH;
static const float HALF_FIELD_LENGTH      = FIELD_LENGTH * 0.5f;
static const float HALF_GREEN_LENGTH      = GREEN_LENGTH * 0.5f;

static const float GOAL_BOX_DEPTH         = 60.f;
static const float GOAL_BOX_WIDTH         = 220.f;

static const float GOAL_WIDTH             = 140.f;

static const float GOAL_LINE_Y            = 0;
static const float GOALPOST_Y             = GOAL_LINE_Y;
static const float GREEN_BOTTOM_EDGE_Y    = -GREEN_EDGE_WIDTH;
static const float GOAL_BOX_TOP_Y         = GOAL_BOX_DEPTH;
static const float CROSS_Y                = 1800.f;
static const float HALF_FIELD_Y           = HALF_FIELD_LENGTH;
static const float OPP_GOAL_LINE_Y        = FIELD_LENGTH;
static const float GREEN_TOP_EDGE_Y       = FIELD_LENGTH + GREEN_EDGE_WIDTH;

static const float CENTER_GOAL_X          = 0;
static const float RIGHT_POST_X           = GOAL_WIDTH * 0.5f;
static const float LEFT_POST_X            = -RIGHT_POST_X;
static const float GOAL_BOX_RIGHT_X       = GOAL_BOX_WIDTH * 0.5f;
static const float GOAL_BOX_LEFT_X        = -GOAL_BOX_RIGHT_X;
static const float RIGHT_SIDELINE_X       = FIELD_WIDTH * 0.5f;
static const float LEFT_SIDELINE_X        = -RIGHT_SIDELINE_X;
static const float GREEN_RIGHT_EDGE_X     = GREEN_WIDTH * 0.5f;
static const float GREEN_LEFT_EDGE_X      = -GREEN_RIGHT_EDGE_X;

static const float RIGHT_GOALBOX_CORNER_X = GOAL_BOX_RIGHT_X;
static const float LEFT_GOALBOX_CORNER_X  = GOAL_BOX_LEFT_X;
static const float GOALBOX_CORNER_Y       = GOAL_BOX_TOP_Y;

static const float CENTER_CIRCLE_DIAM     = 120.f;
static const float CENTER_CIRCLE_RAD      = CENTER_CIRCLE_DIAM * 0.5f;

static const float CROSS_WIDTH            = 10.f;

static const float GOALPOST_WIDTH         = 10.f;
static const float GOAL_DEPTH             = 40.0f;
static const float GOAL_BACK_Y            = -(GOAL_DEPTH + GOALPOST_WIDTH
                                              * 0.5f);

#endif //FieldConstants_h_DEFINED

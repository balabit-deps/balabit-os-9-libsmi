/*
 * This Java file has been generated by smidump 0.4.5. Do not edit!
 * It is intended to be used within a Java AgentX sub-agent environment.
 *
 * $Id: RpMauTable.java 4432 2006-05-29 16:21:11Z strauss $
 */

/**
    This class represents a Java AgentX (JAX) implementation of
    the table rpMauTable defined in MAU-MIB.

    @version 1
    @author  smidump 0.4.5
    @see     AgentXTable
 */

import java.util.Vector;

import jax.AgentXOID;
import jax.AgentXVarBind;
import jax.AgentXResponsePDU;
import jax.AgentXSetPhase;
import jax.AgentXTable;
import jax.AgentXEntry;

public class RpMauTable extends AgentXTable
{

    // entry OID
    private final static long[] OID = {1, 3, 6, 1, 2, 1, 26, 1, 1, 1};

    // constructors
    public RpMauTable()
    {
        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(1));
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
        columns.addElement(new Long(10));
    }

    public RpMauTable(boolean shared)
    {
        super(shared);

        oid = new AgentXOID(OID);

        // register implemented columns
        columns.addElement(new Long(1));
        columns.addElement(new Long(2));
        columns.addElement(new Long(3));
        columns.addElement(new Long(4));
        columns.addElement(new Long(5));
        columns.addElement(new Long(6));
        columns.addElement(new Long(7));
        columns.addElement(new Long(8));
        columns.addElement(new Long(9));
        columns.addElement(new Long(10));
    }

    public AgentXVarBind getVarBind(AgentXEntry entry, long column)
    {
        AgentXOID oid = new AgentXOID(getOID(), column, entry.getInstance());

        switch ((int)column) {
        case 1: // rpMauGroupIndex
        {
            int value = ((RpMauEntry)entry).get_rpMauGroupIndex();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 2: // rpMauPortIndex
        {
            int value = ((RpMauEntry)entry).get_rpMauPortIndex();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 3: // rpMauIndex
        {
            int value = ((RpMauEntry)entry).get_rpMauIndex();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 4: // rpMauType
        {
            AgentXOID value = ((RpMauEntry)entry).get_rpMauType();
            return new AgentXVarBind(oid, AgentXVarBind.OBJECTIDENTIFIER, value);
        }
        case 5: // rpMauStatus
        {
            int value = ((RpMauEntry)entry).get_rpMauStatus();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 6: // rpMauMediaAvailable
        {
            int value = ((RpMauEntry)entry).get_rpMauMediaAvailable();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 7: // rpMauMediaAvailableStateExits
        {
            long value = ((RpMauEntry)entry).get_rpMauMediaAvailableStateExits();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 8: // rpMauJabberState
        {
            int value = ((RpMauEntry)entry).get_rpMauJabberState();
            return new AgentXVarBind(oid, AgentXVarBind.INTEGER, value);
        }
        case 9: // rpMauJabberingStateEnters
        {
            long value = ((RpMauEntry)entry).get_rpMauJabberingStateEnters();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        case 10: // rpMauFalseCarriers
        {
            long value = ((RpMauEntry)entry).get_rpMauFalseCarriers();
            return new AgentXVarBind(oid, AgentXVarBind.COUNTER32, value);
        }
        }

        return null;
    }

    public int setEntry(AgentXSetPhase phase,
                        AgentXEntry entry,
                        long column,
                        AgentXVarBind vb)
    {

        switch ((int)column) {
        case 5: // rpMauStatus
        {
            if (vb.getType() != AgentXVarBind.INTEGER)
                return AgentXResponsePDU.WRONG_TYPE;
            else
                return ((RpMauEntry)entry).set_rpMauStatus(phase, vb.intValue());
        }
        }

        return AgentXResponsePDU.NOT_WRITABLE;
    }

}

